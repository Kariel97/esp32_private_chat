/*

NOTE: don't edit manually, this is generated by build.sh

*/
const char* HTMLPAGE="<!DOCTYPE html><html><head><meta charset=\"utf-8\"><meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=1.0, minimum-scale=1.0, maximum-scale=1.0\"></head><body><div><div style=\"text-align: center; background-color: rgba(33, 33, 31); color: white; height: 30px;\"><b>Chat Privado</b></div></div><noscript><p>Sorry, you'll need javascript to submit a post... but here's what people have been saying:</p><iframe sandbox src=\"./posts\"></iframe></noscript><div id=\"l\"></div><div id=\"f\"><textarea type=\"text\" id=\"t\" placeholder=\"Mensaje...\"></textarea><button id=\"s\">Enviar</button></div><script type=\"text/javascript\">var log=console.error;var $=i=>document.getElementById(i);var ready=true;g=()=>{/*get new messages*/if(!ready){return;}fetch('./posts').then(r=>r.text()).then((t)=>{if(t!=''){$('l').innerHTML=t.split('\\u001e').map(s=>s.replace(/</g,'&lt;')).map(s=>s.replace(/>/g,'&gt;')).map(s=>s.replace(/\\n/g,'<br>')).map(s=>'<p>'+s+'</p>').join('');ready=true;}else{$('l').innerHTML='<b>Sin mensajes</b>'}}).catch((e)=>{log(e);ready=true;});};g();setInterval(g,1000);$('s').addEventListener('click',e=>{fetch('./post',{method:'POST',body:$('t').value}).then(r=>{$('t').value='';g();}).catch(e=>{log(e);g();})});</script><style type=\"text/css\">div{border-radius: 5px; background-color: #f2f2f2;padding: 20px;}#f{display:flex;align-items:stretch;height:50px;}p{border-bottom:solid 1px rgba(0,0,0,0.1);padding:1em;margin:6px;word-wrap:break-word; border-left: 2px solid #4CAF50;background-color: rgba(0,0,0,0.1); border-radius: 20px;}textarea{width:100%; padding: 12px 20px;margin: 8px 0;display: inline-block;border: 1px solid #ccc;border-radius: 4px;box-sizing: border-box;}html,body{width:100%;min-height:100%;margin:0;padding:0;font-size:20px;font-family:-apple-system, BlinkMacSystemFont, \"Segoe UI\", Roboto, \"Helvetica Neue\", Arial, sans-serif, \"Apple Color Emoji\", \"Segoe UI Emoji\", \"Segoe UI Symbol\";}body{display:flex;flex-direction:column;}textarea,button{font-size:20px;height:50px;}button{padding:0 1em; background-color: #4CAF50; color: white;padding: 14px 20px; margin: 10px; border: none; border-radius: 4px;cursor: pointer;} button:hover{background-color: #45a049;}</style></body></html>";