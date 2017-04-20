/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDRecoveryKeyValidatorImpl : NSObject <CDPRecoveryKeyValidatorInernal> {
    CDPContext * _context;
    <CDPDRecoveryKeyValidatorInternalDelegate> * _delegate;
    NSString * _recoveryKey;
    BOOL  _recoveryKeyVerified;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *recoveryKey;
@property (nonatomic) BOOL recoveryKeyVerified;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)confirmRecoveryKey:(id)arg1 completion:(id /* block */)arg2;
- (void)generateRecoveryKey:(id /* block */)arg1;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (id)recoveryKey;
- (BOOL)recoveryKeyVerified;
- (void)setRecoveryKey:(id)arg1;
- (void)setRecoveryKeyVerified:(BOOL)arg1;

@end