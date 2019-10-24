<?php
  include_once("utils.inc");

  $id = isset($_GET["id"])?$_GET["id"]:-1;
  $res = getData("location", $id);
//  header("Content-type: application/json; charset=utf-8");
  echo "$res";
?>