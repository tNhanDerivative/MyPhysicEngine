#include"Logger.h"

#include<spdlog/spdlog.h>
#include<spdlog/common.h>

std::shared_ptr<spdlog::logger> Logger::CoreLogger = nullptr;
std::shared_ptr<spdlog::logger> Logger::ClientLogger = nullptr;

void Logger::Init() {
        // Example: [22:40:00] [VIEngine::Logger:Init:11] [VIEngine] [Thread:1000] Logger works
        spdlog::set_pattern("%^[%H:%M:%S] [%!:%#] [%n] [Thread:%t] %v%$");

        CoreLogger = spdlog::stdout_color_mt("CoreLib");
        CoreLogger->set_level(spdlog::level::trace);

        ClientLogger = spdlog::stdout_color_mt("Client");
        ClientLogger->set_level(spdlog::level::trace);
}
