#ifndef s573retdec_H
#define s573retdec_H

#include "w2c2_base.h"

typedef struct s573retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s573retdecInstance;

void f0(s573retdecInstance*);

void f1(s573retdecInstance*);

U32 f2(s573retdecInstance*);

void f3(s573retdecInstance*,U32);

U32 f4(s573retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s573retdecInstance*,U32,U32,U32,U32,U32);

void f6(s573retdecInstance*,U32);

void f7(s573retdecInstance*,U32,U32,U32);

void f8(s573retdecInstance*,U32,U32,U32);

void s573retdec____wasm_call_ctors(s573retdecInstance*i);

void s573retdec____wasm_apply_data_relocs(s573retdecInstance*i);

U32 s573retdec_func_1(s573retdecInstance*i);

void s573retdec_call_cb(s573retdecInstance*i,U32 l0);

void s573retdecInstantiate(s573retdecInstance* instance, void* resolve(const char* module, const char* name));

void s573retdecFreeInstance(s573retdecInstance* instance);

#endif /* s573retdec_H */

