import Vue from 'vue'
import VueRouter from 'vue-router'
import TurnOn from '../views/TurnOn.vue'
import TextToTurnOn from '../views/TextToTurnOn.vue'
import About from '../views/About.vue'
import Default from '../views/Default.vue'

Vue.use(VueRouter)

const routes = [
  {
    path: '/',
    name: 'Default',
    component: Default
  },
  {
    path: '/turnon',
    name: 'TurnOn',
    component: TurnOn
  },
  {
    path: '/texton',
    name: 'TextToTurnOn',
    component: TextToTurnOn
  },
  {
    path: '/about',
    name: 'About',
    component: About
  }
]

const router = new VueRouter({
  mode: 'history',
  base: process.env.BASE_URL,
  routes
})

export default router
