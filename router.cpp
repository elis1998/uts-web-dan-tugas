<?php

/*
/............................................
/ web Router
/............................................

/ here is where you can register web routers for you application.these 
/ routers are loaded by the routerServceProvider within a group which
/ contains the "web" middlawer group. Now create something great
/
*/

Router::get ('/',fucition() {
    return view('welcome');
});

Router::get('halo',fucition() {
     return view"Halo, Selamat datang di tutorial laravel www.belajarbersama.com";
});

Router::get('blog',fuction() {
 return view('blog') ;
});




