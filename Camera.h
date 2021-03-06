#pragma  once
#include "Vectors.h"

namespace Engine
{
	class Camera
	{
		public:
			Vector3& GetViewRight();
			Vector3& GetViewUp();
			Vector3& GetViewForward();
			Vector3& GetViewTranslation();
			float GetViewFovX();
			float GetViewFovY();
			Vector3 WorldToScreen(Vector3& position);
	};
}