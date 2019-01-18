/***********************************************************************************************************************************
Error Type Definition

Automatically generated by Build.pm -- do not modify directly.
***********************************************************************************************************************************/

/***********************************************************************************************************************************
Error type definitions
***********************************************************************************************************************************/
ERROR_DEFINE( 25, AssertError, RuntimeError);
ERROR_DEFINE( 26, ChecksumError, RuntimeError);
ERROR_DEFINE( 27, ConfigError, RuntimeError);
ERROR_DEFINE( 28, FileInvalidError, RuntimeError);
ERROR_DEFINE( 29, FormatError, RuntimeError);
ERROR_DEFINE( 30, CommandRequiredError, RuntimeError);
ERROR_DEFINE( 31, OptionInvalidError, RuntimeError);
ERROR_DEFINE( 32, OptionInvalidValueError, RuntimeError);
ERROR_DEFINE( 33, OptionInvalidRangeError, RuntimeError);
ERROR_DEFINE( 34, OptionInvalidPairError, RuntimeError);
ERROR_DEFINE( 35, OptionDuplicateKeyError, RuntimeError);
ERROR_DEFINE( 36, OptionNegateError, RuntimeError);
ERROR_DEFINE( 37, OptionRequiredError, RuntimeError);
ERROR_DEFINE( 38, PostmasterRunningError, RuntimeError);
ERROR_DEFINE( 39, ProtocolError, RuntimeError);
ERROR_DEFINE( 40, PathNotEmptyError, RuntimeError);
ERROR_DEFINE( 41, FileOpenError, RuntimeError);
ERROR_DEFINE( 42, FileReadError, RuntimeError);
ERROR_DEFINE( 43, ParamRequiredError, RuntimeError);
ERROR_DEFINE( 44, ArchiveMismatchError, RuntimeError);
ERROR_DEFINE( 45, ArchiveDuplicateError, RuntimeError);
ERROR_DEFINE( 46, VersionNotSupportedError, RuntimeError);
ERROR_DEFINE( 47, PathCreateError, RuntimeError);
ERROR_DEFINE( 48, CommandInvalidError, RuntimeError);
ERROR_DEFINE( 49, HostConnectError, RuntimeError);
ERROR_DEFINE( 50, LockAcquireError, RuntimeError);
ERROR_DEFINE( 51, BackupMismatchError, RuntimeError);
ERROR_DEFINE( 52, FileSyncError, RuntimeError);
ERROR_DEFINE( 53, PathOpenError, RuntimeError);
ERROR_DEFINE( 54, PathSyncError, RuntimeError);
ERROR_DEFINE( 55, FileMissingError, RuntimeError);
ERROR_DEFINE( 56, DbConnectError, RuntimeError);
ERROR_DEFINE( 57, DbQueryError, RuntimeError);
ERROR_DEFINE( 58, DbMismatchError, RuntimeError);
ERROR_DEFINE( 59, DbTimeoutError, RuntimeError);
ERROR_DEFINE( 60, FileRemoveError, RuntimeError);
ERROR_DEFINE( 61, PathRemoveError, RuntimeError);
ERROR_DEFINE( 62, StopError, RuntimeError);
ERROR_DEFINE( 63, TermError, RuntimeError);
ERROR_DEFINE( 64, FileWriteError, RuntimeError);
ERROR_DEFINE( 66, ProtocolTimeoutError, RuntimeError);
ERROR_DEFINE( 67, FeatureNotSupportedError, RuntimeError);
ERROR_DEFINE( 68, ArchiveCommandInvalidError, RuntimeError);
ERROR_DEFINE( 69, LinkExpectedError, RuntimeError);
ERROR_DEFINE( 70, LinkDestinationError, RuntimeError);
ERROR_DEFINE( 71, TablespaceInPgdataError, RuntimeError);
ERROR_DEFINE( 72, HostInvalidError, RuntimeError);
ERROR_DEFINE( 73, PathMissingError, RuntimeError);
ERROR_DEFINE( 74, FileMoveError, RuntimeError);
ERROR_DEFINE( 75, BackupSetInvalidError, RuntimeError);
ERROR_DEFINE( 76, TablespaceMapError, RuntimeError);
ERROR_DEFINE( 77, PathTypeError, RuntimeError);
ERROR_DEFINE( 78, LinkMapError, RuntimeError);
ERROR_DEFINE( 79, FileCloseError, RuntimeError);
ERROR_DEFINE( 80, DbMissingError, RuntimeError);
ERROR_DEFINE( 81, DbInvalidError, RuntimeError);
ERROR_DEFINE( 82, ArchiveTimeoutError, RuntimeError);
ERROR_DEFINE( 83, FileModeError, RuntimeError);
ERROR_DEFINE( 84, OptionMultipleValueError, RuntimeError);
ERROR_DEFINE( 85, ProtocolOutputRequiredError, RuntimeError);
ERROR_DEFINE( 86, LinkOpenError, RuntimeError);
ERROR_DEFINE( 87, ArchiveDisabledError, RuntimeError);
ERROR_DEFINE( 88, FileOwnerError, RuntimeError);
ERROR_DEFINE( 89, UserMissingError, RuntimeError);
ERROR_DEFINE( 90, OptionCommandError, RuntimeError);
ERROR_DEFINE( 91, GroupMissingError, RuntimeError);
ERROR_DEFINE( 92, PathExistsError, RuntimeError);
ERROR_DEFINE( 93, FileExistsError, RuntimeError);
ERROR_DEFINE( 94, MemoryError, RuntimeError);
ERROR_DEFINE( 95, CryptoError, RuntimeError);
ERROR_DEFINE( 96, ParamInvalidError, RuntimeError);
ERROR_DEFINE( 97, PathCloseError, RuntimeError);
ERROR_DEFINE( 98, FileInfoError, RuntimeError);
ERROR_DEFINE( 99, JsonFormatError, RuntimeError);
ERROR_DEFINE(100, KernelError, RuntimeError);
ERROR_DEFINE(101, ServiceError, RuntimeError);
ERROR_DEFINE(102, ExecuteError, RuntimeError);
ERROR_DEFINE(122, RuntimeError, RuntimeError);
ERROR_DEFINE(123, InvalidError, RuntimeError);
ERROR_DEFINE(124, UnhandledError, RuntimeError);
ERROR_DEFINE(125, UnknownError, RuntimeError);

/***********************************************************************************************************************************
Error type array
***********************************************************************************************************************************/
static const ErrorType *errorTypeList[] =
{
    &AssertError,
    &ChecksumError,
    &ConfigError,
    &FileInvalidError,
    &FormatError,
    &CommandRequiredError,
    &OptionInvalidError,
    &OptionInvalidValueError,
    &OptionInvalidRangeError,
    &OptionInvalidPairError,
    &OptionDuplicateKeyError,
    &OptionNegateError,
    &OptionRequiredError,
    &PostmasterRunningError,
    &ProtocolError,
    &PathNotEmptyError,
    &FileOpenError,
    &FileReadError,
    &ParamRequiredError,
    &ArchiveMismatchError,
    &ArchiveDuplicateError,
    &VersionNotSupportedError,
    &PathCreateError,
    &CommandInvalidError,
    &HostConnectError,
    &LockAcquireError,
    &BackupMismatchError,
    &FileSyncError,
    &PathOpenError,
    &PathSyncError,
    &FileMissingError,
    &DbConnectError,
    &DbQueryError,
    &DbMismatchError,
    &DbTimeoutError,
    &FileRemoveError,
    &PathRemoveError,
    &StopError,
    &TermError,
    &FileWriteError,
    &ProtocolTimeoutError,
    &FeatureNotSupportedError,
    &ArchiveCommandInvalidError,
    &LinkExpectedError,
    &LinkDestinationError,
    &TablespaceInPgdataError,
    &HostInvalidError,
    &PathMissingError,
    &FileMoveError,
    &BackupSetInvalidError,
    &TablespaceMapError,
    &PathTypeError,
    &LinkMapError,
    &FileCloseError,
    &DbMissingError,
    &DbInvalidError,
    &ArchiveTimeoutError,
    &FileModeError,
    &OptionMultipleValueError,
    &ProtocolOutputRequiredError,
    &LinkOpenError,
    &ArchiveDisabledError,
    &FileOwnerError,
    &UserMissingError,
    &OptionCommandError,
    &GroupMissingError,
    &PathExistsError,
    &FileExistsError,
    &MemoryError,
    &CryptoError,
    &ParamInvalidError,
    &PathCloseError,
    &FileInfoError,
    &JsonFormatError,
    &KernelError,
    &ServiceError,
    &ExecuteError,
    &RuntimeError,
    &InvalidError,
    &UnhandledError,
    &UnknownError,
    NULL,
};
