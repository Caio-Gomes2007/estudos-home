class Pessoa{
    constructor(nome,idade,peso) {
        this.name = nome
        this.idade = idade
        this.peso = peso
    }
    falar() {
        console.log(`Olá meu nome é ${this.name}, minha idade é ${this.idade} e meu peso é ${this.peso}`)
    }

}
const caio = new Pessoa('Caio', 16, '44kg')
caio.falar

//so tem isso
