#ifndef s460retdec_H
#define s460retdec_H

#include "w2c2_base.h"

typedef struct s460retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s460retdecInstance;

void f0(s460retdecInstance*);

void f1(s460retdecInstance*);

U32 f2(s460retdecInstance*);

void f3(s460retdecInstance*,U32);

U32 f4(s460retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s460retdecInstance*,U32,U32,U32,U32,U32);

void f6(s460retdecInstance*,U32);

void f7(s460retdecInstance*,U32,U32,U32);

void f8(s460retdecInstance*,U32,U32,U32);

void s460retdec____wasm_call_ctors(s460retdecInstance*i);

void s460retdec____wasm_apply_data_relocs(s460retdecInstance*i);

U32 s460retdec_func_1(s460retdecInstance*i);

void s460retdec_call_cb(s460retdecInstance*i,U32 l0);

void s460retdecInstantiate(s460retdecInstance* instance, void* resolve(const char* module, const char* name));

void s460retdecFreeInstance(s460retdecInstance* instance);

#endif /* s460retdec_H */

