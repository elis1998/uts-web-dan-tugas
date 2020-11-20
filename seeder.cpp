<?php

namespace Database\Seeder;

use App\Models\Produk;
use Illuminate\Database\Seeder;

class ProduksTableseder extends seeder
{
   /**
    * Run the database seeds
    *
    * @return void
    */
   public function run()
   {
       Prodek::create(
       [
       'NAMA'=> "KINGSTON 4GB", 'ID_KAAGORI' =>'3',
       'HARGA_BELI' =>'50000',  'HARGA JUAL' => 'HARGA_JUAL'=>'100000'
       ],
       [
       'NAMA'=> "Mouse Logistich", 'ID KATEGORI' => '2',
       'HARGA_BELI' => '15000', 'HARGA_JUAL' => '30000'
       ]
    );
   }

    
 
 
}
