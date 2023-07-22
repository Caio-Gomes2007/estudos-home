var book = {
    autor: 'nit',
    nome: 'se la vi',
    capa: 'img/...'
};

function enumerando(objeto) {
    var teste = objeto.propertyIsEnumerable('autor');
    console.log(teste);
}

enumerando(book);
