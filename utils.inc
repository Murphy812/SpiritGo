<?php

  function getData ($dataname, $dataid) {
    switch ($dataname) {
      case "location":
        $filename = "location".$dataid.".json";
        break;
      default:
        echo "haven't data reqs";
    }
    
    $string = file_get_contents("./datasources/".$filename);
//    $json_a = json_decode($string, true);
//    return $json_a;
    return $string;
  }


?>