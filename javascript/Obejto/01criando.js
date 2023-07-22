var objeto = {}//vazio
var aluno = {
    nome:'caio',
    Nota:{
        matematica:8,
        fisica:8,
        biologia:7
    }
}
console.log(aluno.Nota.fisica)//consultando valores

const aluno2 = new Object();//menos rapido
aluno2.nome ="matheus"
aluno2.Nota ={}
aluno2.Nota.matematica ='8'
aluno2.Nota.fisica ='8'
aluno2.Nota.biologia ='8'
console.log(aluno2)

function Pessoa(name,age){
    var obj = {}
    obj.name = name
    obj.age = age
    
    console.log(obj)
}

var caio = Pessoa('caio',15)
