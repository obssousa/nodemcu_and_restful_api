<template>
  <v-sheet rounded="xl" class="mx-auto">
    <v-card class="mx-auto" max-width="344" outlined>
      <v-list-item three-line>
        <v-list-item-content>
          <v-list-item-title class="headline mb-1">
            <p class="text-center">Acender</p>
          </v-list-item-title>
          <v-list-item-subtitle>
            <p class="text-center">Pressione para acender o número</p>
          </v-list-item-subtitle>
        </v-list-item-content>
      </v-list-item>
      <v-list-item>
        <v-list-item-content>
          <v-row>
            <v-col cols="4">
              <v-btn @click="turnOn(1)" class="mx-2" fab dark large color="yellow black--text"> 1 </v-btn>
            </v-col>
            <v-col cols="4">
              <v-btn @click="turnOn(2)" class="mx-2" fab dark large color="yellow black--text"> 2 </v-btn>
            </v-col>
            <v-col cols="4">
              <v-btn @click="turnOn(3)" class="mx-2" fab dark large color="yellow black--text"> 3 </v-btn>
            </v-col>
          </v-row>
          <v-row>
            <v-col cols="4">
              <v-btn @click="turnOn(4)" class="mx-2" fab dark large color="yellow black--text"> 4 </v-btn>
            </v-col>
            <v-col cols="4">
              <v-btn @click="turnOn(5)" class="mx-2" fab dark large color="yellow black--text"> 5 </v-btn>
            </v-col>
            <v-col cols="4">
              <v-btn @click="turnOn(6)" class="mx-2" fab dark large color="yellow black--text"> 6 </v-btn>
            </v-col>
          </v-row>
          <v-row>
            <v-col cols="4">
              <v-btn @click="turnOn(7)" class="mx-2" fab dark large color="yellow black--text"> 7 </v-btn>
            </v-col>
            <v-col cols="4">
              <v-btn @click="turnOn(8)" class="mx-2" fab dark large color="yellow black--text"> 8 </v-btn>
            </v-col>
            <v-col cols="4">
              <v-btn @click="turnOn(9)" class="mx-2" fab dark large color="yellow black--text"> 9 </v-btn>
            </v-col>
          </v-row>
          <v-row>
            <v-col cols="4" offset="4">
              <v-btn @click="turnOn(0)" class="mx-2" fab dark large color="yellow black--text"> 0 </v-btn>
            </v-col>
          </v-row>
        </v-list-item-content>
      </v-list-item>
    </v-card>
  </v-sheet>
</template>

<script>
export default {
  name: 'TurnOn',
  data: () => ({
    value: 'turnOn'
  }),
  methods: {
    turnOn (value) {
      const key = '$2b$10$LibHW7q/8ZUp2jmyJIKJ2ef7nPkawX6rOqR1pTjamZ9Kz2qR1GrZa'
      const bin = '60089a11bca934583e3f8cce'
      this.$axios.put('https://api.jsonbin.io/v3/b/' + bin, {
        last: value
      },
      {
        headers: {
          'X-Master-Key': key,
          'X-Bin-Versioning': false
        }
      })
        .then(function (response) {
          console.log(response)
        })
        .catch(function (error) {
          console.log(error)
        })
      // this.$axios.get('https://api.jsonbin.io/b/' + bin, {
      //   headers: {
      //     'secret-key': key
      //   }
      // })
      //   .then(function (response) {
      //     console.log(response)
      //   })
      //   .catch(function (error) {
      //     console.log(error)
      //   })
    }
  }
}
</script>
