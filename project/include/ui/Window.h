#ifndef LIME_UI_WINDOW_H
#define LIME_UI_WINDOW_H


#include <app/Application.h>


namespace lime {
	
	
	class Window {
		
		
		public:
			
			Application* currentApplication;
		
		
	};
	
	
	Window* CreateWindow (Application* application);
	
	
}


#endif