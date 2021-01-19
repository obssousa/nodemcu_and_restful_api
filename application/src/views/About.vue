<template>
  <v-sheet rounded="xl" class="mx-auto">
    <v-card class="mx-auto" max-width="344" outlined>
      <v-list-item three-line>
        <v-list-item-content>
          <v-list-item-title class="headline mb-1">
            <p class="text-center">Sobre o Projeto</p>
          </v-list-item-title>
          <v-list-item-subtitle>
            <p class="text-center">Remote Circuits S.A</p>
          </v-list-item-subtitle>
        </v-list-item-content>
      </v-list-item>
      <v-list-item>
        <v-list-item-content>
          <v-layout justify-center>
                  <v-img
                    src="@/assets/logo.png"
                    max-height="250"
                    max-width="250"
                  ></v-img>
          </v-layout>
        </v-list-item-content>
      </v-list-item>
      <v-card-actions>
        <v-row class="justify-center align-center">
      <v-col cols="5">
        <v-btn rounded text> <v-icon>mdi-airplane</v-icon> <span>Telegram</span> </v-btn>
      </v-col>
        </v-row>
      </v-card-actions>
    </v-card>
    <div v-for="participant in participants" :key="participant.name" >
    <Participant :participant='participant' />
    </div>
  </v-sheet>
</template>

<script>
import Participant from '@/components/Participant.vue'

export default {
  name: 'About',
  data: () => ({
    participants: [
      {
        name: 'Allison Oliveira',
        stack: ['Direção de Marketing', 'Analista de Eletrônica'],
        img: 'alison.jpg',
        linkedin: '',
        github: ''
      },
      {
        name: 'Ana Luiza Primo',
        stack: ['Direção de T.I.', 'Desenvolvedora DevOps'],
        img: 'ana.jpg',
        linkedin: '',
        github: ''
      },
      {
        name: 'Bruno Sousa',
        stack: ['Direção de Desenvolvimento', 'Desenvolvedor FullStack'],
        img: 'bruno.jpg',
        linkedin: '',
        github: ''
      },
      {
        name: 'Felipe Oliveira',
        stack: ['Direção de Engenharia', 'Analista de Circuitos'],
        img: 'felipe.jpg',
        linkedin: '',
        github: ''
      }
    ]
  }),
  components: {
    Participant
  }
}
</script>
