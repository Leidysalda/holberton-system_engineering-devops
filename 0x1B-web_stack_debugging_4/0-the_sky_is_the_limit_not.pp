# Sky is the limit, let's bring that limit higher

exec { 'debugging':
     command => "sed -i 's/15/15000/' /etc/default/nginx;
     service nginx restart",
     path    => ['/bin/', '/usr/bin'],
}