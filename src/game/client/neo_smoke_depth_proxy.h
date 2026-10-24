#ifndef NEO_SMOKE_DEPTH_PROXY_H
#define NEO_SMOKE_DEPTH_PROXY_H
#ifdef _WIN32
#pragma once
#endif

// Smoke grenades are translucent particle effects that write no depth, so
// nothing drawn after them can be depth-tested against the cloud. This lays down
// invisible, depth-only spheres standing in for every live smoke grenade so that
// late translucent renderables (the cap zone ring) fail their depth test behind
// smoke. Called once per world view, after all smoke has been blended and before
// the "no Z buffer" translucent renderables are drawn (viewrender.cpp,
// CRendering3dView::DrawNoZBufferTranslucentRenderables).
void NeoDrawSmokeDepthProxies();

#endif // NEO_SMOKE_DEPTH_PROXY_H
