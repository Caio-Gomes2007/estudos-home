function aninhada(x,y) {
    function square(x) {
        return x*y
    }
    return Math.sqrt(square(y)+square(x))
}
var x = 1
var y =  1
console.log(aninhada(x,y));