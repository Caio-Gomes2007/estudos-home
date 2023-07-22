function exibir(num) {
    console.log(`O resultado é ${num}`);
}
function soma(x, y,cb) {
    let soma = x + y
    cb(soma);
}
//cb == calback

soma(2,2,exibir)