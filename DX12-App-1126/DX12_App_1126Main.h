﻿#pragma once

#include "Common\StepTimer.h"
#include "Common\DeviceResources.h"
#include "Content\Sample3DSceneRenderer.h"

// 在屏幕上呈现 Direct3D 内容。
namespace DX12_App_1126
{
	class DX12_App_1126Main
	{
	public:
		DX12_App_1126Main();
		void CreateRenderers(const std::shared_ptr<DX::DeviceResources>& deviceResources);
		void Update();
		bool Render();

		void OnWindowSizeChanged();
		void OnSuspending();
		void OnResuming();
		void OnDeviceRemoved();

	private:
		// TODO: 替换为你自己的内容呈现器。
		std::unique_ptr<Sample3DSceneRenderer> m_sceneRenderer;

		// 渲染循环计时器。
		DX::StepTimer m_timer;
	};
}