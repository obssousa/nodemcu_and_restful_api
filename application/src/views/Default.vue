<template>
  <v-main app>
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
  data: () => ({
  })
}
</script>
