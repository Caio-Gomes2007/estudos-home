function CriandoUsuario(NomeDoUsuario,Idade,Tipo='UsuarioComun'){
    const usuario = {}
    usuario.NomeDoUsuario = NomeDoUsuario
    usuario.Idade = Idade
    usuario.Tipo = {
        Tipo:Tipo,
    }
    if(Tipo == 'Adm'){
        
        usuario.Tipo.Permissoes ={
            AlterarPagina:true,
            AcessarConfiguracao:true
        }
    }else{
        usuario.Tipo.Permissoes ={
            AlterarPagina:false,
            AcessarConfiguracao:false
        }
    }
    return usuario
}

// console.log(CriandoUsuario('Caio',16,'Adm'))
// console.log(CriandoUsuario('Fulano',20))

function CriandoUsuario(NomeDoUsuario,Idade,Tipo='UsuarioComun'){
    const usuario = {}
    usuario.NomeDoUsuario = NomeDoUsuario
    usuario.Idade = Idade
    usuario.Tipo = {
        Tipo:Tipo,
    }
    if(Tipo == 'Adm'){
        
       usuario.Tipo.Permissoes = {
            AlterarPagina:true,
            AcessarConfiguracao:true
       }
    }else{ 
         
       usuario.Tipo.Permissoes = {
        AlterarPagina:false,
        AcessarConfiguracao:false
   }
    }
    return usuario
}
// console.log(CriandoUsuario('Caio',16,'Adm'))
console.log(CriandoUsuario('Fulano',20))
