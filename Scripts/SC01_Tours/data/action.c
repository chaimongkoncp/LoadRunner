Action()
{

	web_url("www.newtours.demoaut.com", 
		"URL=http://www.newtours.demoaut.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	lr_start_transaction("SC01_tours_01_home");

	lr_end_transaction("SC01_tours_01_home",LR_AUTO);

	lr_start_transaction("SC01_tours_02_login");

	web_submit_data("login.php", 
		"Action=http://www.newtours.demoaut.com/login.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://www.newtours.demoaut.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=osCsid", "Value=035dbb52b699b8b4e3efdfabc8c33dd9", ENDITEM, 
		"Name=action", "Value=process", ENDITEM, 
		"Name=userName", "Value=cap1", ENDITEM, 
		"Name=password", "Value=1234", ENDITEM, 
		"Name=login.x", "Value=29", ENDITEM, 
		"Name=login.y", "Value=13", ENDITEM, 
		EXTRARES, 
		"Url=http://newtours.demoaut.com/classes/calendar/showCalendar.class", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(6);

	web_submit_data("mercuryreservation2.php", 
		"Action=http://newtours.demoaut.com/mercuryreservation2.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://newtours.demoaut.com/mercuryreservation.php?osCsid=035dbb52b699b8b4e3efdfabc8c33dd9", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=tripType", "Value=roundtrip", ENDITEM, 
		"Name=passCount", "Value=1", ENDITEM, 
		"Name=fromPort", "Value=Acapulco", ENDITEM, 
		"Name=fromMonth", "Value=11", ENDITEM, 
		"Name=fromDay", "Value=29", ENDITEM, 
		"Name=toPort", "Value=Acapulco", ENDITEM, 
		"Name=toMonth", "Value=11", ENDITEM, 
		"Name=toDay", "Value=29", ENDITEM, 
		"Name=servClass", "Value=Coach", ENDITEM, 
		"Name=airline", "Value=No Preference", ENDITEM, 
		"Name=findFlights.x", "Value=51", ENDITEM, 
		"Name=findFlights.y", "Value=10", ENDITEM, 
		LAST);

	web_submit_data("mercurypurchase.php", 
		"Action=http://newtours.demoaut.com/mercurypurchase.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://newtours.demoaut.com/mercuryreservation2.php", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=fromPort", "Value=Acapulco", ENDITEM, 
		"Name=toPort", "Value=Acapulco", ENDITEM, 
		"Name=passCount", "Value=1", ENDITEM, 
		"Name=toDay", "Value=29", ENDITEM, 
		"Name=toMonth", "Value=11", ENDITEM, 
		"Name=fromDay", "Value=29", ENDITEM, 
		"Name=fromMonth", "Value=11", ENDITEM, 
		"Name=servClass", "Value=Coach", ENDITEM, 
		"Name=outFlight", "Value=Blue Skies Airlines$360$270$5:03", ENDITEM, 
		"Name=inFlight", "Value=Blue Skies Airlines$630$270$12:23", ENDITEM, 
		"Name=reserveFlights.x", "Value=71", ENDITEM, 
		"Name=reserveFlights.y", "Value=8", ENDITEM, 
		LAST);

	web_submit_data("mercurypurchase2.php", 
		"Action=http://newtours.demoaut.com/mercurypurchase2.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://newtours.demoaut.com/mercurypurchase.php", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outFlightName", "Value=Blue Skies Airlines", ENDITEM, 
		"Name=outFlightNumber", "Value=360", ENDITEM, 
		"Name=outFlightPrice", "Value=270", ENDITEM, 
		"Name=outFlightTime", "Value=5:03", ENDITEM, 
		"Name=inFlightName", "Value=Blue Skies Airlines", ENDITEM, 
		"Name=inFlightNumber", "Value=630", ENDITEM, 
		"Name=inFlightPrice", "Value=270", ENDITEM, 
		"Name=inFlightTime", "Value=12:23", ENDITEM, 
		"Name=fromPort", "Value=Acapulco", ENDITEM, 
		"Name=toPort", "Value=Acapulco", ENDITEM, 
		"Name=passCount", "Value=1", ENDITEM, 
		"Name=toDay", "Value=29", ENDITEM, 
		"Name=toMonth", "Value=11", ENDITEM, 
		"Name=fromDay", "Value=29", ENDITEM, 
		"Name=fromMonth", "Value=11", ENDITEM, 
		"Name=servClass", "Value=Coach", ENDITEM, 
		"Name=subtotal", "Value=540", ENDITEM, 
		"Name=taxes", "Value=44", ENDITEM, 
		"Name=passFirst0", "Value=cap", ENDITEM, 
		"Name=passLast0", "Value=cappp", ENDITEM, 
		"Name=pass.0.meal", "Value=", ENDITEM, 
		"Name=creditCard", "Value=AX", ENDITEM, 
		"Name=creditnumber", "Value=12345", ENDITEM, 
		"Name=cc_exp_dt_mn", "Value=None", ENDITEM, 
		"Name=cc_exp_dt_yr", "Value=None", ENDITEM, 
		"Name=cc_frst_name", "Value=", ENDITEM, 
		"Name=cc_mid_name", "Value=", ENDITEM, 
		"Name=cc_last_name", "Value=", ENDITEM, 
		"Name=billAddress1", "Value=1325 Borregas Ave.", ENDITEM, 
		"Name=billAddress2", "Value=", ENDITEM, 
		"Name=billCity", "Value=Sunnyvale", ENDITEM, 
		"Name=billState", "Value=CA", ENDITEM, 
		"Name=billZip", "Value=94089", ENDITEM, 
		"Name=billCountry", "Value=215", ENDITEM, 
		"Name=delAddress1", "Value=1325 Borregas Ave.", ENDITEM, 
		"Name=delAddress2", "Value=", ENDITEM, 
		"Name=delCity", "Value=Sunnyvale", ENDITEM, 
		"Name=delState", "Value=CA", ENDITEM, 
		"Name=delZip", "Value=94089", ENDITEM, 
		"Name=delCountry", "Value=215", ENDITEM, 
		"Name=buyFlights.x", "Value=85", ENDITEM, 
		"Name=buyFlights.y", "Value=8", ENDITEM, 
		LAST);

	lr_end_transaction("SC01_tours_02_login",LR_AUTO);

	lr_start_transaction("SC01_tours_03_logout");

	web_url("SIGN-OFF", 
		"URL=http://newtours.demoaut.com/mercurysignoff.php", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://newtours.demoaut.com/mercurypurchase2.php", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("SC01_tours_03_logout",LR_AUTO);

	return 0;
}