<li class="{dede:field.currentstyle/}"> <a href="{dede:field name='typeurl'/}"  title="{dede:field name='typename'/}" data-alert="全部">{dede:field name='typename'/}</a>
        <ul>
          {dede:channel type='son' noself='true'}
          <li class="nav2"><a href="[field:typelink/]" data-alert="全部">[field:typename/]</a></li>
          {/dede:channel}
        </ul>
      </li>