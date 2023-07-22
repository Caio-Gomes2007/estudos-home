function carro(marca, modelo, ano) {
    this.marca = marca;
    this.modelo = modelo;
    this.ano = ano;
}

let MyCarro = new carro("toyota", "corola", 2021)
console.log(MyCarro);