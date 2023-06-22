#ifndef s57retdec_H
#define s57retdec_H

#include "w2c2_base.h"

typedef struct s57retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s57retdecInstance;

void f0(s57retdecInstance*);

void f1(s57retdecInstance*);

U32 f2(s57retdecInstance*);

void f3(s57retdecInstance*,U32);

void f4(s57retdecInstance*,U32);

void s57retdec____wasm_call_ctors(s57retdecInstance*i);

void s57retdec____wasm_apply_data_relocs(s57retdecInstance*i);

U32 s57retdec_func_1(s57retdecInstance*i);

void s57retdec_call_cb(s57retdecInstance*i,U32 l0);

void s57retdecInstantiate(s57retdecInstance* instance, void* resolve(const char* module, const char* name));

void s57retdecFreeInstance(s57retdecInstance* instance);

#endif /* s57retdec_H */

