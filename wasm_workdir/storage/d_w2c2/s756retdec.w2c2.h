#ifndef s756retdec_H
#define s756retdec_H

#include "w2c2_base.h"

typedef struct s756retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s756retdecInstance;

void f0(s756retdecInstance*);

void f1(s756retdecInstance*);

U32 f2(s756retdecInstance*);

void f3(s756retdecInstance*,U32);

U32 f4(s756retdecInstance*,U32,U32,U32,U32,U32);

void f5(s756retdecInstance*,U32,U32,U32,U32,U32);

void f6(s756retdecInstance*,U32);

void f7(s756retdecInstance*,U32,U32,U32);

void f8(s756retdecInstance*,U32,U32,U32);

void s756retdec____wasm_call_ctors(s756retdecInstance*i);

void s756retdec____wasm_apply_data_relocs(s756retdecInstance*i);

U32 s756retdec_func_1(s756retdecInstance*i);

void s756retdec_call_cb(s756retdecInstance*i,U32 l0);

void s756retdecInstantiate(s756retdecInstance* instance, void* resolve(const char* module, const char* name));

void s756retdecFreeInstance(s756retdecInstance* instance);

#endif /* s756retdec_H */

