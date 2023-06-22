#ifndef s136r2_H
#define s136r2_H

#include "w2c2_base.h"

typedef struct s136r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s136r2Instance;

void f0(s136r2Instance*);

void f1(s136r2Instance*);

U32 f2(s136r2Instance*);

void f3(s136r2Instance*,U32);

U32 f4(s136r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s136r2Instance*,U32,U32,U32,U32,U32);

void f6(s136r2Instance*,U32);

void f7(s136r2Instance*,U32,U32,U32);

void f8(s136r2Instance*,U32,U32,U32);

void s136r2____wasm_call_ctors(s136r2Instance*i);

void s136r2____wasm_apply_data_relocs(s136r2Instance*i);

U32 s136r2_func_1(s136r2Instance*i);

void s136r2_call_cb(s136r2Instance*i,U32 l0);

void s136r2Instantiate(s136r2Instance* instance, void* resolve(const char* module, const char* name));

void s136r2FreeInstance(s136r2Instance* instance);

#endif /* s136r2_H */

