<template>
  <v-app>
    <Default :view='view' />
    <BottomNavigation @changeView='changeView' />
  </v-app>
</template>

<script>
import Default from './views/Default.vue'
import BottomNavigation from './components/BottomNavigation.vue'

export default {
  name: 'App',

  components: {
    Default,
    BottomNavigation
  },

  data: () => ({
    view: 'turnOn'
  }),
  methods: {
    changeView (value) {
      this.view = value
    }
  }
}
</script>
