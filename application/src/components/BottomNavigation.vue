<template>
  <v-bottom-navigation
    v-model="value"
    @change="selectView"
    background-color="teal"
    grow
    dark
    app
  >
    <div class="mt-3">
      <v-row>
        <v-col cols="4">
          <v-btn text value="turnOn">
            <span>Acender</span>
            <v-icon>mdi-lightbulb-on</v-icon>
          </v-btn>
        </v-col>
        <v-col cols="4">
          <v-btn text value="textOn">
            <span>Contar</span>
            <v-icon>mdi-format-textbox</v-icon>
          </v-btn>
        </v-col>
        <v-col cols="4">
          <v-btn text value="about">
            <span>Sobre</span>
            <v-icon>mdi-alert-circle-outline</v-icon>
          </v-btn>
        </v-col>
      </v-row>
    </div>
  </v-bottom-navigation>
</template>

<script>
export default {
  name: 'Default',
  data: () => ({
    value: 'turnOn'
  }),
  methods: {
    selectView () {
      this.$emit('changeView', this.value)
    }
  }
}
</script>
