/*
 * FreeRTOS V202002.00
 * Copyright (C) 2017 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

/*
 * PEM-encoded client certificate
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWjCCAkKgAwIBAgIVAJExYtQY/SYA4hq3CDjIcv1wrNbhMA0GCSqGSIb3DQEB\n"\
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0yMDA0MjUxOTU1\n"\
"MjlaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDqqCYCbvsy/uKdT6zw\n"\
"0FjLbrEuspe4SSgDhJqBhRE4JYTbzjlzVQ94LUIE97430Bv47IyUUIhbUtMxtWHh\n"\
"+hMPJC2xKakx3YEoLTrtxrZndLbQjhjgr9c3V0dPp7ADcXPQoI1ExecurT0y6cGn\n"\
"M4S35Nc2ZDqTdHVOZ8q6lVkSG8n0Krq04lW8NmgZnEPiLm5BSCx5U127NvxCvbr3\n"\
"GR2kRPHmB7InPehvLqy9XKsb0cfjKIhJBrd3EHpqryd8ZeXPOHT+rV4OJuA/HxwW\n"\
"mSXzEzqrXfiENSLDPLt1PoDpnZi22URtR5zTYG/jpAKZHnKCj+RR+EoePmZpkJ09\n"\
"ShtdAgMBAAGjYDBeMB8GA1UdIwQYMBaAFO4Zj2+6fd6BUDyKlpU+kCqnnBDLMB0G\n"\
"A1UdDgQWBBQuR/zadh3bRsSiyOtAdqsRGVySHjAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAgpYHAIRbRH8gfMJNhw6OrI1l\n"\
"2ZPTAHW3CZbHceHxVlmr6YTvbUq6wBAUBbUO5NnsqECpyvQ0+3+KZcKa2BPEPwge\n"\
"hoC36BbIbxZMFzV7szLpLmdPAk8u5HXsVWyZLBNTvzQjHCZmKwjmhTZqIbJKk/Bs\n"\
"vpUmKSI6OiKUYodSnEP2dBbUXE+rbBiWapPzmqXiuHDNk8e4LZkC0jrGAlWj4/7G\n"\
"549XHOOxootR38bSwLHXlNstFubtlQZF7V/Npc8V46wJ2xcp2Fg0DPPb3UupzKgI\n"\
"oYFwbDUpmb4nL4noAGnUhX6Umf9n1KrKdJCakrKyFdzYn8Tg1gnmpRCITxpMAw==\n"\
"-----END CERTIFICATE-----\n"

/*
 * PEM-encoded issuer certificate for AWS IoT Just In Time Registration (JITR).
 * This is required if you're using JITR, since the issuer (Certificate
 * Authority) of the client certificate is used by the server for routing the
 * device's initial request. (The device client certificate must always be
 * sent as well.) For more information about JITR, see:
 *  https://docs.aws.amazon.com/iot/latest/developerguide/jit-provisioning.html,
 *  https://aws.amazon.com/blogs/iot/just-in-time-registration-of-device-certificates-on-aws-iot/.
 *
 * If you're not using JITR, set below to NULL.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  ""

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----\n"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEpAIBAAKCAQEA6qgmAm77Mv7inU+s8NBYy26xLrKXuEkoA4SagYUROCWE2845\n"\
"c1UPeC1CBPe+N9Ab+OyMlFCIW1LTMbVh4foTDyQtsSmpMd2BKC067ca2Z3S20I4Y\n"\
"4K/XN1dHT6ewA3Fz0KCNRMXnLq09MunBpzOEt+TXNmQ6k3R1TmfKupVZEhvJ9Cq6\n"\
"tOJVvDZoGZxD4i5uQUgseVNduzb8Qr269xkdpETx5geyJz3oby6svVyrG9HH4yiI\n"\
"SQa3dxB6aq8nfGXlzzh0/q1eDibgPx8cFpkl8xM6q134hDUiwzy7dT6A6Z2YttlE\n"\
"bUec02Bv46QCmR5ygo/kUfhKHj5maZCdPUobXQIDAQABAoIBAQCVPztlotbMeYcC\n"\
"zRFO3QUM5qt06wxKnuT/T9DBfjQUhPB6qTCrJTfAlPB/nl7yur9/1FwZXRtNEmHX\n"\
"JOlLxDVpFPamzruZRqwGNLZdU1zicj5waWBzUAPPZAisJhhyKC+kSulvC3xdmLvq\n"\
"7PhJcx//omIraxZCgPi3VJaBk8niFGjU65jhRuz66eABqPeajw0YfKhSFr1Hqowt\n"\
"T5P5e+8Smh82kaWD8NDnlN06J3PHJduIY4zJg9yoLDVxqX362D0TAyb1BhjYZgcK\n"\
"5cvKZaXywWT45zamLfM8Ghib4e8YuYw3U7TfFoLY/Zp7N/Mgk5FCdYNy0MRFEmx1\n"\
"vq8w+8E1AoGBAPdh8s24N1mu7msd5R8aZVaIZpOIP6PlKZMgEqBsakrXhW/kfU5T\n"\
"Xyz71N2eKUmtzbC66JwGiP9LFmWiTgApZ2q2Z5VlFhSWSNDI73YBNA0hBZhn1VkH\n"\
"lzo++ghUv1Lva4NIBw1RrSoMYH0FE9vb+HTMc6eZ+ZYIxyGlE3jj2Q/TAoGBAPLU\n"\
"t4yblTLij6k9Ru3UDvxxrusObWc3ifgjGx5RhHxr0GqxxkH3JTOp5uBhMB0Z0SXd\n"\
"ZTz1uSzUxGAUVtA42RQ8atZTOGNNiMHR8trk2Vx/loaFOReVTWbXvb391iHkjHhL\n"\
"fTIr1t6mvctylcmEvvLML0CK/O8kdAjt0JHctloPAoGACXxfBBZpQO4dREw8Keoo\n"\
"Mp4+WK/jyNQTuQmEzVP6623CNx0q1OMLhj0N14WmDaY1ee5g1wLFJAzsCe+kUAtG\n"\
"ZOgjpq3en+F3X1IlJIA9T7eRcFui6awJ13jsu38MaxC1La6IXrFgE3mwBXs5XLfd\n"\
"mhTw5l9YG7GweRDMY1lRTHMCgYAi0mo32Z+9mkuro0PmmwBDJzJENt9ta8N3N+GN\n"\
"qXbsOLG8ex3JG93T2Mto5cb2hVs+qM75vOr/CMvYU1JXra9DfZ58eZaeduHjmW3Q\n"\
"Af1BjHJTfAtB3IEq/EkTU7E/TvztyzV62lqHtzWEVTwxl72iJ7Gm+cdnq7yQAzpj\n"\
"kFj99QKBgQConK4aibLyUPM/NamaXkacZ2Salz2u/DakWjhgh2cjKERQNRH8L0Os\n"\
"KDFnbvrEwGrcBcqNT8i5BDO0km463OGtGwS21V9B28kfViXxYV0KW3YMz8f0yzyr\n"\
"gUA+eIA7NfZORynNtzMiXI4sR2kYmntVJdhtI5SakctsIzLXH2K8jA==\n"\
"-----END RSA PRIVATE KEY-----\n"

#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
