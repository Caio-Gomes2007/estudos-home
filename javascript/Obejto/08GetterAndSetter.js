//getter
const car ={
    _marca:'fiat',
    ano:2007,
    Acelera: function(){
        console.log('vrom')
    },
    get marca(){
        return this._marca
    }
}
// console.log(car.marca)

//setter

const car2 = {
    _marca: '',
    ano: 2007,
    acelera: function() {
      console.log('vrom');
    },
    set marca(marca) {
      this._marca = marca;
    },get marca(){
        return this._marca
    }
  };
  
car2._marca = 'fiat'
console.log(car2._marca)
  