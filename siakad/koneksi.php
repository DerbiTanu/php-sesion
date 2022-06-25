<?php

	// Koneksi ke database
	$conn = mysqli_connect("localhost", "id19147070_siakad_user", "P@ssw0rd2022", "id19147070_siakad");

	//Cek koneksi
	if(mysqli_connect_errno())
	{
		echo "Koneksi database gagal! : " .mysqli_connect_error();
	}
?>