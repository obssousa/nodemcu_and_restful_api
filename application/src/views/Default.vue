<template>
<v-main app>
  <v-container fill-height>
    <v-row class="justify-center align-center">
      <v-col cols="12" sm="4" md="8" lg="8">
        <div v-if="view === 'turnOn'">
          <TurnOn />
        </div>
        <div v-else-if="view === 'textOn'">
          <TextToTurnOn />
        </div>
        <div v-else-if="view === 'about'">
          <About />
        </div>
        <div v-else>Erro na aplicação, contate os desenvolvedores</div>
      </v-col>
    </v-row>
  </v-container>
</v-main>
</template>

<script>
import About from '@/views/About.vue'
import TextToTurnOn from '@/views/TextToTurnOn.vue'
import TurnOn from '@/views/TurnOn.vue'

export default {
  name: 'Default',
  components: {
    About,
    TextToTurnOn,
    TurnOn
  },
  props: {
    view: { type: String }
  },
  data: () => ({})
}
</script>
