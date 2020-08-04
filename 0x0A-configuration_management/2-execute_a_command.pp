# manifest that kills a process named killmenow.

exec {'killmenow':
  path	  => ['/usr/local/sbin', '/usr/local/bin', '/usr/sbin', '/usr/bin', '/sbin', '/bin', '/usr/games', '/usr/local/games'],
  command => 'pkill -9 killmenow',
}