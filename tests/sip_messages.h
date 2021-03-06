const char* sip_messages[] = {

"INVITE sip:2100@172.20.3.28;user=phone SIP/2.0\r\n"
"Via: SIP/2.0/UDP 172.20.3.46;branch=z9hG4bKce49e348C486E67\r\n"
"From: \"2278\" <sip:2278@172.20.3.28>;tag=F29AA123-A06C7B62\r\n"
"To: <sip:2100@172.20.3.28;user=phone>\r\n"
"CSeq: 1 INVITE\r\n"
"Call-ID: f3c99e26-20e78e85-6ecadb84@172.20.3.46\r\n"
"Contact: <sip:2278@172.20.3.46>\r\n"
"Allow: INVITE, ACK, BYE, CANCEL, OPTIONS, INFO, MESSAGE, SUBSCRIBE, NOTIFY, PRACK, UPDATE, REFER\r\n"
"User-Agent: PolycomSoundPointIP-SPIP_650-UA/3.1.3.0439\r\n"
"Accept-Language: en\r\n"
"Supported: 100rel,replaces\r\n"
"Allow-Events: talk,hold,conference\r\n"
"Max-Forwards: 70\r\n"
"Content-Type: application/sdp\r\n"
"Content-Length: 292\r\n"
"\r\n"
"v=0\r\n"
"o=- 1251311173 1251311173 IN IP4 172.20.3.46\r\n"
"s=Polycom IP Phone\r\n"
"c=IN IP4 172.20.3.46\r\n"
"t=0 0\r\n"
"a=sendrecv\r\n"
"m=audio 2262 RTP/AVP 9 0 8 18 101\r\n"
"a=rtpmap:9 G722/8000\r\n"
"a=rtpmap:0 PCMU/8000\r\n"
"a=rtpmap:8 PCMA/8000\r\n"
"a=rtpmap:18 G729/8000\r\n"
"a=fmtp:18 annexb=no\r\n"
"a=rtpmap:101 telephone-event/8000\r\n",

"SIP/2.0 180 Ringing\r\n"
"From: \"2278\"<sip:2278@172.20.1.75>;tag=F29AA123-A06C7B62\r\n"
"To: <sip:2100@172.20.1.75>;tag=56d5b20-0-13c4-1a8f25-19d36363-1a8f25\r\n"
"Call-ID: f3c99e26-20e78e85-6ecadb84@172.20.3.46\r\n"
"CSeq: 1 INVITE\r\n"
"P-Asserted-Identity: \"Test Jones\" <sip:2100@172.20.1.75>\r\n"
"Supported: 100rel,replaces\r\n"
"Allow: ACK, BYE, CANCEL, INFO, INVITE, NOTIFY, OPTIONS, PRACK, REFER, REGISTER\r\n"
"User-Agent: ADTRAN_NetVanta_7100/A4.03.00.SA.E\r\n"
"Via: SIP/2.0/UDP 172.20.3.28:5060;branch=z9hG4bK32FAECCD819932007603A5DA64B47F70\r\n"
"Via: SIP/2.0/UDP 172.20.3.46;branch=z9hG4bKce49e348C486E67\r\n"
"Contact: <sip:172.20.1.75:5060;transport=UDP>\r\n"
"Content-Length: 0\r\n\r\n",

"INVITE sip:2023@172.20.3.28;user=phone SIP/2.0\r\n"
"Via: SIP/2.0/UDP 172.20.3.49;branch=z9hG4bKa7663567648D8694\r\n"
"From: \"Test Jones\" <sip:2100@172.20.3.28>;tag=2FD1CCC0-2747C9D9\r\n"
"To: <sip:2023@172.20.3.28;user=phone>\r\n"
"CSeq: 1 INVITE\r\n"
"Call-ID: 5604cc9d-8c5b22d2-c8623843@172.20.3.49\r\n"
"Contact: <sip:2100@172.20.3.49>\r\n"
"Allow: INVITE, ACK, BYE, CANCEL, OPTIONS, INFO, MESSAGE, SUBSCRIBE, NOTIFY, PRACK, UPDATE, REFER\r\n"
"User-Agent: PolycomSoundPointIP-SPIP_650-UA/3.1.3.0439\r\n"
"Accept-Language: en\r\n"
"Supported: 100rel,replaces\r\n"
"Allow-Events: talk,hold,conference\r\n"
"Max-Forwards: 70\r\n"
"Content-Type: application/sdp\r\n"
"Content-Length: 292\r\n"
"\r\n"
"v=0\r\n"
"o=- 1167698093 1167698093 IN IP4 172.20.3.49\r\n"
"s=Polycom IP Phone\r\n"
"c=IN IP4 172.20.3.49\r\n"
"t=0 0\r\n"
"a=sendrecv\r\n"
"m=audio 2236 RTP/AVP 9 0 8 18 101\r\n"
"a=rtpmap:9 G722/8000\r\n"
"a=rtpmap:0 PCMU/8000\r\n"
"a=rtpmap:8 PCMA/8000\r\n"
"a=rtpmap:18 G729/8000\r\n"
"a=fmtp:18 annexb=no\r\n"
"a=rtpmap:101 telephone-event/8000\r\n",

"INVITE sip:2278@172.21.1.234;user=phone SIP/2.0\r\n"
"Via: SIP/2.0/UDP 172.21.1.243;branch=z9hG4bKecdfd2f9F1382E9C\r\n"
"From: \"Test Jones\" <sip:2100@172.21.1.234>;tag=679D6B20-6C4A13CF\r\n"
"To: <sip:2278@172.21.1.234;user=phone>\r\n"
"CSeq: 1 INVITE\r\n"
"Call-ID: a3cf04fb-694454c6-c808226d@172.21.1.243\r\n"
"Contact: <sip:2100@172.21.1.243>\r\n"
"Allow: INVITE, ACK, BYE, CANCEL, OPTIONS, INFO, MESSAGE, SUBSCRIBE, NOTIFY, PRACK, UPDATE, REFER\r\n"
"User-Agent: PolycomSoundPointIP-SPIP_650-UA/3.1.3.0439\r\n"
"Accept-Language: en\r\n"
"Supported: 100rel,replaces\r\n"
"Allow-Events: talk,hold,conference\r\n"
"Max-Forwards: 70\r\n"
"Content-Type: application/sdp\r\n"
"Content-Length: 294\r\n"
"\r\n"
"v=0\r\n"
"o=- 1167609879 1167609879 IN IP4 172.21.1.243\r\n"
"s=Polycom IP Phone\r\n"
"c=IN IP4 172.21.1.243\r\n"
"t=0 0\r\n"
"a=sendrecv\r\n"
"m=audio 2222 RTP/AVP 9 0 8 18 101\r\n"
"a=rtpmap:9 G722/8000\r\n"
"a=rtpmap:0 PCMU/8000\r\n"
"a=rtpmap:8 PCMA/8000\r\n"
"a=rtpmap:18 G729/8000\r\n"
"a=fmtp:18 annexb=no\r\n"
"a=rtpmap:101 telephone-event/8000\r\n",

"SUBSCRIBE sip:3927@172.20.10.11 SIP/2.0\r\n"
"Via: SIP/2.0/UDP 172.20.10.15:5060;branch=01c25868f92833aa65cbf91ca61359de\r\n"
"From: <sip:003018CFE4EF@172.20.10.11>;tag=a029cd8a32ac851c82209daf16ec1025\r\n"
"To: <sip:3927@172.20.10.11>\r\n"
"Call-ID: 8d85b527914aa8537be39b1b8278a13b@172.20.10.15\r\n"
"CSeq: 750179 SUBSCRIBE\r\n"
"Max-Forwards: 60\r\n"
"Contact: sip:172.20.10.15:5060\r\n"
"Event: mac-address-query-event\r\n"
"Expires: 3600\r\n"
"Accept: application/mac-address\r\n"
"User-Agent: \"VCX SIM UA\"; mac=003018CFE4EF\r\n"
"Content-Length: 0\r\n\r\n",

NULL
};
