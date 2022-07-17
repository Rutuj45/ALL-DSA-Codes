

package com.telusko;

import java.util.HashMap;
import java.util.Hashtable;
import java.util.Map;
import java.util.Set;

public class MapDemo {

	public static void main(String[] args) {
		
		Map<String , String> map = new HashMap();
		map.put("myName","Rutuj");
		map.put("actor","ranveer");
		map.put("ceo", "Rohit");
		map.put("myName", "virat");
		
		Set<String> Keys = map.keySet();
		
		for(String key : Keys) {
			
			System.out.println(key + " " + map.get(key));
		}
		
		System.out.println(map);
		
	}

}
