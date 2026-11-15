const numero = document.querySelector("#numero");
let valor = 0;
const botaoAumentar = document.querySelector("#aumentar");
botaoAumentar.addEventListener("click", function () {
    // ação quando clicar
    valor++;
    numero.textContent = valor;
});
const botaoDiminuir = document.querySelector("#diminuir");
botaoDiminuir.addEventListener("click", function () {
    // ação quando clicar
    valor--;
    numero.textContent = valor;
});
const botaoZerar = document.querySelector("#zerar");
botaoZerar.addEventListener("click", function () {
    // ação quando clicar
    valor = 0;
    numero.textContent = valor;
});