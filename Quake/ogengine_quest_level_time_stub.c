/**
 * Standalone stub for ogengine_queue_quest_level_time.
 * When OQUAKE_QUEST_LEVEL_TIME_STUB is defined, provides the symbol so the linker succeeds
 * when OGEngineClient.lib does not export it (e.g. older STARAPIClient build). No-op (quest level
 * time is not sent). BUILD_OQUAKE.bat / apply_oquake_to_vkquake.ps1 add this file and the
 * define so "BUILD QUAKE" works without manual steps.
 *
 * If you get LNK2005 (duplicate symbol), remove OQUAKE_QUEST_LEVEL_TIME_STUB from the
 * project so the real export from OGEngineClient.dll is used.
 */
#ifdef OQUAKE_QUEST_LEVEL_TIME_STUB

#ifdef __cplusplus
extern "C" {
#endif

void ogengine_queue_quest_level_time(const char* game_source, int level_elapsed_seconds)
{
    (void)game_source;
    (void)level_elapsed_seconds;
}

#ifdef __cplusplus
}
#endif

#endif /* OQUAKE_QUEST_LEVEL_TIME_STUB */
