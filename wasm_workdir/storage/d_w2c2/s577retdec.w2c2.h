#ifndef s577retdec_H
#define s577retdec_H

#include "w2c2_base.h"

typedef struct s577retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s577retdecInstance;

void f0(s577retdecInstance*);

void f1(s577retdecInstance*);

U32 f2(s577retdecInstance*);

void f3(s577retdecInstance*,U32);

U32 f4(s577retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s577retdecInstance*,U32,U32,U32,U32,U32);

void f6(s577retdecInstance*,U32);

void f7(s577retdecInstance*,U32,U32,U32);

void f8(s577retdecInstance*,U32,U32,U32);

void s577retdec____wasm_call_ctors(s577retdecInstance*i);

void s577retdec____wasm_apply_data_relocs(s577retdecInstance*i);

U32 s577retdec_func_1(s577retdecInstance*i);

void s577retdec_call_cb(s577retdecInstance*i,U32 l0);

void s577retdecInstantiate(s577retdecInstance* instance, void* resolve(const char* module, const char* name));

void s577retdecFreeInstance(s577retdecInstance* instance);

#endif /* s577retdec_H */

