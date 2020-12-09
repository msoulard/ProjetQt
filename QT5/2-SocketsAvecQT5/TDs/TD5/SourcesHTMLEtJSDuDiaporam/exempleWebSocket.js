/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


$(function ()
{
    var maWebsocket;
    // l'API WebSocket est-elle installee ?
    if (window.WebSocket)
    {
        // creation de la WebSocket
        maWebsocket = new WebSocket('ws://172.18.58.104:8888');

        //Gestion des evenements de la WebSocket
        maWebsocket.onopen = function ()
        {
            console.log("ouverture webSocket");
        };
        maWebsocket.onclose = function (event)
        {
            console.log("code de a la fermeture : " + event.code);
            console.log("raison de la fermeture : " + event.reason);
        };
        maWebsocket.onerror = function ()
        {
            console.log("erreur sur la webSocket");
        };
        maWebsocket.onmessage = function (donneesRecues)
        {
            console.log("reception de donnees : " + donneesRecues.data);
            console.log("origine : " + donneesRecues.origin);
        };
    }
    $("#demande").click(function(){
        // envoyer la chaine "date" au serveur de WebSocket
       maWebsocket.send("date");
    });
});
