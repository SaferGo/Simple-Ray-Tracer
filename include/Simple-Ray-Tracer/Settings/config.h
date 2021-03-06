#pragma once

#include <glm/glm.hpp>

#include <string>

namespace config
{
   inline const std::string IMG_TITLE  = "output";

   inline constexpr int RESOLUTION_W = 600;
   inline constexpr int RESOLUTION_H = 400;

   // Antialiasing
   inline constexpr int N_SAMPLES    = 100;

   // Number of bouncings rays per pixel
   inline constexpr int MAX_DEPTH    = 20;

   namespace camera
   {
      inline constexpr glm::vec3 LOOK_FROM(0.0, 1.0, 2.0);
      inline constexpr glm::vec3 LOOK_AT(0.0, 0.0, -1.0);
      inline constexpr glm::vec3 VUP(0.0, 1.0, 0.0);
      inline constexpr float ASPECT = float(RESOLUTION_W) / float(RESOLUTION_H);
      inline constexpr float VFOV = 30.0f;

      // Effects
      inline constexpr bool DOF_ENABLED = true;

      // Depth Of Field
      namespace DOF
      {
         inline constexpr glm::vec3 FOCAL_POINT(0.0, 0.0, -1.0);

         inline constexpr float APERTURE_SIZE = 0.3f;
         inline const float FOCAL_DISTANCE = glm::length(
               LOOK_FROM - FOCAL_POINT
         );
      };
   };
};
