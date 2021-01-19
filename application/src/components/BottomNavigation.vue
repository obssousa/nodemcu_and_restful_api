<template>
  <v-bottom-navigation
    v-model="value"
    @change="selectView"
    background-color="teal"
    grow
    dark
    app
  >
    <v-btn value="turnOn">
      <span>Acender</span>

      <v-icon>mdi-lightbulb-on</v-icon>
    </v-btn>

    <v-btn value="textOn">
      <span>Texto</span>

      <v-icon>mdi-format-textbox</v-icon>
    </v-btn>

    <v-btn value="about">
      <span>Sobre</span>

      <v-icon>mdi-alert-circle-outline</v-icon>
    </v-btn>
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
