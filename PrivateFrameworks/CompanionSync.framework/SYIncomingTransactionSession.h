/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYIncomingTransactionSession : SYSession {
    id /* block */  _completion;
    SYChangeMessage * _message;
    NSObject<OS_os_activity> * _sessionActivity;
    BOOL  canRestart;
    BOOL  canRollback;
    int  state;
}

- (void).cxx_destruct;
- (void)_sendCancelled;
- (void)_sendChanges;
- (void)_sendComplete;
- (BOOL)canRestart;
- (BOOL)canRollback;
- (void)cancelWithError:(id)arg1;
- (void)didCompleteSession;
- (id)initWithService:(id)arg1 transaction:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)isResetSync;
- (BOOL)isSending;
- (unsigned int)protocolVersion;
- (void)setCanRestart:(BOOL)arg1;
- (void)setCanRollback:(BOOL)arg1;
- (void)setState:(int)arg1;
- (void)start:(id /* block */)arg1;
- (int)state;
- (BOOL)wasCancelled;

@end