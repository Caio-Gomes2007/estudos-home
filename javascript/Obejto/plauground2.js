function gerarID() {
    var id = '';
    for (var i = 0; i < 7; i++) {
      id += Math.floor(Math.random() * 10);
    }
    return id;
  }
  
  function CriandoUsuario(NomeDoUsuario, Idade, Tipo = 'UsuarioComun') {
    const usuarios = {};
  
    usuarios[NomeDoUsuario] = {};
    usuarios[NomeDoUsuario].Idade = Idade;
    usuarios[NomeDoUsuario].Id = gerarID();
    usuarios[NomeDoUsuario].Id ;
    usuarios[NomeDoUsuario].Tipo = {
      Tipo: Tipo,

    };
  
    if (Tipo === 'Adm') {
      usuarios[NomeDoUsuario].Tipo.ControleTotal = true
    } else {
      usuarios[NomeDoUsuario].Tipo.ControleTotal = false
    }
  
    return usuarios;
  }
  
console.log(CriandoUsuario('Caio', 16, 'Adm'));
console.log(CriandoUsuario('fulano',20))  
console.log(CriandoUsuario('maira',38,'Adm'))