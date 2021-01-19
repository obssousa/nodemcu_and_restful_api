<template>
  <v-card class="mx-auto" max-width="344" outlined>
    <v-list-item three-line>
      <v-list-item-content>
        <v-list-item-title class="headline mb-1">
          {{ participant.name }}
        </v-list-item-title>
        <v-list-item-subtitle>
          <div v-for="stack in participant.stack" :key="stack">
            <p>{{ stack }}</p>
          </div>
        </v-list-item-subtitle>
      </v-list-item-content>

      <v-list-item-avatar tile size="80" color="grey">
        <v-img :src="require('@/assets/' + participant.img)"></v-img>
      </v-list-item-avatar>
    </v-list-item>

    <v-card-actions>
      <v-btn outlined rounded text> Linkedin </v-btn>
      <v-btn outlined rounded text> Github </v-btn>
    </v-card-actions>
  </v-card>
</template>

<script>
export default {
  name: 'Participant',
  props: {
    participant: {
      type: Object
    }
  }
}
</script>
