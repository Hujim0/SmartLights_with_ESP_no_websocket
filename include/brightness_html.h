const char *brightness_html = R"(
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>

<body>
    <script type="text/javascript">
        window.onload = function () {
            var url_raw = window.location.href;
            var index_url = url_raw.split('?')[0];
            window.location.href = index_url.split("/brightness")[0];
        }
    </script>
</body>

</html>

)";