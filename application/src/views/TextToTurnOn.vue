<template>
  <v-sheet rounded="xl" class="mx-auto">
    <v-card class="mx-auto" max-width="344" outlined>
      <v-list-item three-line>
        <v-list-item-content>
          <v-list-item-title class="headline mb-1">
            <p class="text-center">Contar</p>
          </v-list-item-title>
          <v-list-item-subtitle>
            <p class="text-center">Toque para contar</p>
          </v-list-item-subtitle>
        </v-list-item-content>
      </v-list-item>
      <v-list-item>
        <v-list-item-content>
          <v-row>
            <v-col cols="6">
              <v-btn @click="countAsc()" class="mx-2" dark small color="yellow black--text"> Ascendente </v-btn>
            </v-col>
            <v-col cols="6">
              <v-btn @click="countDesc()" class="mx-2" dark small color="yellow black--text"> Descendente </v-btn>
            </v-col>
          </v-row>
        </v-list-item-content>
      </v-list-item>
    </v-card>
  </v-sheet>
</template>

<script>
export default {
  name: 'TextToTurnOn',
  data: () => ({
    value: 'turnOn'
  }),
  methods: {
    countAsc () {
      const instance = this
      for (let i = 0; i <= 9; i++) {
        setTimeout(function () { instance.sendValue(i) }, 1000 + (1000 * i))
      }
    },
    countDesc () {
      for (let index = 9; index <= 0; index--) {
        setTimeout(this.sendValue(index), 1000)
      }
    },
    sendValue (value) {
      const forPost = {
        token: 'LV4fr90D2NenaB5sXr-y5A',
        data: {
          last: value
        }
      }
      this.$axios.put('https://app.fakejson.com/q/3kXPaRRw', forPost)
        .then(function (response) {
          console.log(response)
        })
        .catch(function (error) {
          console.log(error)
        })
    }
  }
}
</script>
