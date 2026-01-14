function soma() {
    var num1 = parseFloat(document.getElementById ("n1").value) 
    var num2 = parseFloat(document.getElementById ("n2").value)
    var resp = document.getElementById ("resp_soma")

    if (isNaN(num1)|| isNaN(num2)) {
        alert ("Digite dois números válidos")
        return
    }
    //console.log (typeof num1, typeof num2)
    resp.textContent = num1 + num2
}

function subtrai () {
    var num1 = parseFloat(document.getElementById ("n3").value)
    var num2 = parseFloat(document.getElementById ("n4").value)
    var resp = document.getElementById ("resp_subtrai")

    if (isNaN(num1)|| isNaN(num2)) {
        alert ("Digite dois números válidos")
        return
    }
    resp.innerHTML = num1 - num2
}

function mult () {
    var num1 = parseFloat(document.getElementById ("n5").value)
    var num2 = parseFloat(document.getElementById ("n6").value)
    var resp = document.getElementById ("resp_mult")

    if (isNaN(num1)|| isNaN(num2)) {
        alert ("Digite dois números válidos")
        return
    }
    resp.innerHTML = num1 * num2
}

function dividir () {
    var num1 = parseFloat(document.getElementById ("n7").value)
    var num2 = parseFloat(document.getElementById ("n8").value)
   // var resp = document.getElementById ("resp_div")

    if (num2 === 0) {
        document.getElementById("resp_div").innerHTML = "Não há divisão por 0, digite outro número!!!"
        retturn
    }

    if (isNaN(num1) || isNaN(num2)) {
        document.getElementById("resp_div").innerHTML = "Digite dois números válidos"
        return
    }

    document.getElementById ("resp_div").innerHTML = num1 / num2

    //condicional, que se o primeiro num digitado for === 0,
    // textContent = "Não existe divisão por 0"

}