#ifndef s634retdec_H
#define s634retdec_H

#include "w2c2_base.h"

typedef struct s634retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s634retdecInstance;

void f0(s634retdecInstance*);

void f1(s634retdecInstance*);

U32 f2(s634retdecInstance*);

void f3(s634retdecInstance*,U32);

void f4(s634retdecInstance*,U32);

void s634retdec____wasm_call_ctors(s634retdecInstance*i);

void s634retdec____wasm_apply_data_relocs(s634retdecInstance*i);

U32 s634retdec_func_1(s634retdecInstance*i);

void s634retdec_call_cb(s634retdecInstance*i,U32 l0);

void s634retdecInstantiate(s634retdecInstance* instance, void* resolve(const char* module, const char* name));

void s634retdecFreeInstance(s634retdecInstance* instance);

#endif /* s634retdec_H */

