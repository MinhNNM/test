var con_so = document.getElementsByClassName('btn');
for (var i = 0; i < con_so.length; i++) {
    con_so[i].addEventListener('click', function () {
        document.getElementById('kq').innerHTML += this.value;
    })
}
function tinh() {
    let res = document.getElementById('kq').innerHTML;
    let output = eval(res)
    document.getElementById('kq').innerHTML = output
}
function del(){
    let res=document.getElementById('kq').innerHTML;
    document.getElementById('kq').innerHTML=res.substring(0, res.length-1);
}