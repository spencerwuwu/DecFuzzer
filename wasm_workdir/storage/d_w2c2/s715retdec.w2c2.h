#ifndef s715retdec_H
#define s715retdec_H

#include "w2c2_base.h"

typedef struct s715retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s715retdecInstance;

void f0(s715retdecInstance*);

void f1(s715retdecInstance*);

U32 f2(s715retdecInstance*);

void f3(s715retdecInstance*,U32);

U32 f4(s715retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s715retdecInstance*,U32,U32,U32,U32,U32);

void f6(s715retdecInstance*,U32);

void f7(s715retdecInstance*,U32,U32,U32);

void f8(s715retdecInstance*,U32,U32,U32);

void s715retdec____wasm_call_ctors(s715retdecInstance*i);

void s715retdec____wasm_apply_data_relocs(s715retdecInstance*i);

U32 s715retdec_func_1(s715retdecInstance*i);

void s715retdec_call_cb(s715retdecInstance*i,U32 l0);

void s715retdecInstantiate(s715retdecInstance* instance, void* resolve(const char* module, const char* name));

void s715retdecFreeInstance(s715retdecInstance* instance);

#endif /* s715retdec_H */

